@class NSMutableSet, NSFileHandle;

@interface TRICKQueryLogGuardedData : NSObject {
    BOOL failed;
    NSMutableSet *uniqueLines;
    NSFileHandle *fh;
}

- (void).cxx_destruct;

@end
