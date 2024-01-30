@class NSMutableDictionary;
@protocol CKComponentContextDynamicLookup;

@interface CKComponentContextValue : NSObject {
    NSMutableDictionary *_dictionary;
    id<CKComponentContextDynamicLookup> _dynamicLookup;
}

- (void).cxx_destruct;

@end
