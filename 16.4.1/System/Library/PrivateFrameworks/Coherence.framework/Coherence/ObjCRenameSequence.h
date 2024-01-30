@class NSString;

@interface ObjCRenameSequence : NSObject {
    void /* unknown type, empty encoding */ renameSequence;
    void /* unknown type, empty encoding */ renameAddedBySequence;
}

@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (void)addAddedByReplica:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)addAddedByVersion:(id)a0;
- (void)addWithReplica:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

@end
