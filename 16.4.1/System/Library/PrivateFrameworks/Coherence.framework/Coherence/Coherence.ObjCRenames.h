@class NSString;

@interface Coherence.ObjCRenames : NSObject {
    void /* unknown type, empty encoding */ renames;
}

@property (nonatomic, readonly) long long generation;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) BOOL hasLocalRenames;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)renamed:(id)a0;
- (id)renamed:(long long)a0 replica:(id)a1;
- (id)renamedWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replica:(id)a1;

@end
