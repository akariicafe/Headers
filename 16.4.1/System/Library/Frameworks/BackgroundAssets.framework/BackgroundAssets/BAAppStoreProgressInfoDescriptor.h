@class NSString;

@interface BAAppStoreProgressInfoDescriptor : NSObject <NSSecureCoding, BAAppStoreProgressInfo>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long progressState;
@property (readonly, nonatomic) long long countOfBytesReceived;
@property (readonly, nonatomic) long long countOfBytesExpectedToReceive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
