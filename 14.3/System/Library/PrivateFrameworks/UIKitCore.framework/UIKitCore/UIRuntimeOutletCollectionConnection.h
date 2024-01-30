@class NSString;

@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection

@property (copy) NSString *runtimeCollectionClassName;
@property BOOL addsContentToExistingCollection;

- (void)connect;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)connectForSimulator;
- (void)performConnect;
- (void)encodeWithCoder:(id)a0;

@end
