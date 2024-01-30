@class NSData, NSString, NSArray;
@protocol NFTagA, NFTagF, NFTagB;

@interface NFTag : NSObject <NSSecureCoding, NFTag, NFTagA, NFTagB, NFTagF> {
    unsigned int _type;
    unsigned int _technology;
    NSData *_tagID;
    NSData *_pmm;
    NSArray *_allSystemCodes;
    NSData *_appData;
    NSData *_uid;
    NSString *_description;
    unsigned int _ndefAvailability;
    unsigned long long _ndefMessageSize;
    unsigned long long _ndefContainerSize;
    NSData *_atqa;
    NSData *_sak;
    NSData *_historicalBytes;
    unsigned char _sfgi;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) unsigned int technology;
@property (readonly, copy, nonatomic) NSData *tagID;
@property (readonly, copy, nonatomic) NSData *UID;
@property (readonly, nonatomic) unsigned int ndefAvailability;
@property (readonly, nonatomic) unsigned long long ndefMessageSize;
@property (readonly, nonatomic) unsigned long long ndefContainerSize;
@property (readonly, copy, nonatomic) NSData *AppData;
@property (readonly, nonatomic) id<NFTagA> tagA;
@property (readonly, nonatomic) id<NFTagB> tagB;
@property (readonly, nonatomic) id<NFTagF> tagF;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSData *atqa;
@property (readonly, copy, nonatomic) NSData *sak;
@property (readonly, copy, nonatomic) NSData *historicalBytes;
@property (readonly, copy, nonatomic) NSData *selectedAID;
@property (readonly, nonatomic) double sfgt;
@property (readonly, nonatomic) unsigned char sfgi;
@property (readonly, copy, nonatomic) NSData *pupi;
@property (readonly, copy, nonatomic) NSData *applicationData;
@property (readonly, nonatomic) BOOL applicationDataCoding;
@property (readonly, copy, nonatomic) NSData *IDm;
@property (readonly, copy, nonatomic) NSData *PMm;
@property (readonly, copy, nonatomic) NSData *SystemCode;
@property (readonly, copy, nonatomic) NSArray *allSystemCodes;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNFTag:(id)a0;
- (BOOL)isEqualToNFTag:(id)a0;

@end
