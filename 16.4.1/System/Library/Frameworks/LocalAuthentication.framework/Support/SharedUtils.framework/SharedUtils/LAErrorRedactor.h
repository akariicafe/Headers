@class NSString;

@interface LAErrorRedactor : NSObject <LAErrorRedacting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)redactError:(id)a0;

@end
