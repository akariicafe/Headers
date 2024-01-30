@protocol NSObject;

@interface WFThreeWayMergingObjectGraphComponentEnumerationStackItem : NSObject {
    id<NSObject> _vertex;
    long long _step;
    unsigned long long _predecessorIndex;
}

- (void).cxx_destruct;

@end
