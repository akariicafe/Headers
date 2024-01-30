@class NSArray;

@interface NWPHHandler : NSObject

@property (retain) NSArray *allowedEntitlementGroup;
@property void /* function */ *handlerFunction;

- (void).cxx_destruct;
- (id)initWithHandlerFunction:(void /* function */ *)a0 allowedEntitlementGroup:(id)a1;

@end
