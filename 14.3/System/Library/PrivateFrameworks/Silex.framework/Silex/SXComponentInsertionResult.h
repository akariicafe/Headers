@class SXComponentInsert;
@protocol SXBlueprintMarker;

@interface SXComponentInsertionResult : NSObject {
    SXComponentInsert *_insert;
    id<SXBlueprintMarker> _marker;
}

- (void).cxx_destruct;

@end
