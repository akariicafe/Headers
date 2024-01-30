@class NSString, NSData, NSDate;

@interface FMInternalKeychainItem : NSObject <FMKeychainItem>

@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSDate *lastModifyDate;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSData *rawData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResults:(id)a0;
- (void).cxx_destruct;

@end
