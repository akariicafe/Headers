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

- (void).cxx_destruct;
- (id)initWithResults:(id)a0;

@end
