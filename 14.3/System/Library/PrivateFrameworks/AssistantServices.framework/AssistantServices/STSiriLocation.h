@class NSURL, NSString, NSData;

@interface STSiriLocation : NSObject <AFTranscriptionType>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *addressBookID;
@property (copy, nonatomic) NSString *addressLabel;
@property (copy, nonatomic) NSString *contactName;
@property (copy, nonatomic) NSData *geoResult;
@property (nonatomic) long long resultType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
