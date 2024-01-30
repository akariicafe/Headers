@class NSString;

@interface MFMutableMessageHeadersFactory : NSObject <ECMutableMessageHeadersFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableMessageHeaders;

@end
