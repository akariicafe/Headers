@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IPAGeometryOperatorSequence : IPAGeometryOperator {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSMutableDictionary *map_identifierToOperator;
    NSMutableDictionary *map_identifierToIndex;
    NSMutableArray *_operators;
}

+ (id)sequenceWithIdentifier:(id)a0;
+ (id)sequence;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (unsigned long long)count;
- (id)transformForGeometry:(id)a0;
- (BOOL)appendOperator:(id)a0;
- (BOOL)replaceOperatorWithIdentifier:(id)a0 withOperator:(id)a1;
- (BOOL)removeOperatorWithIdentifier:(id)a0;
- (id)subsequenceFrom:(id)a0 to:(id)a1;

@end
