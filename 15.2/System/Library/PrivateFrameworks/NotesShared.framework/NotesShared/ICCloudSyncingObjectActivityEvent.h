@class NSData, NSString;

@interface ICCloudSyncingObjectActivityEvent : NSObject <CRCoding, CRDataType>

@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSData *fallbackData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerWithCRCoder;

- (void)realizeLocalChangesIn:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (id)initWithData:(id)a0 fallbackData:(id)a1;

@end
