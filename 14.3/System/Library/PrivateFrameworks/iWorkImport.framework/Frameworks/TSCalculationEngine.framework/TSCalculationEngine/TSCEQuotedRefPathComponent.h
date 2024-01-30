@class NSMutableArray;

@interface TSCEQuotedRefPathComponent : NSObject {
    NSMutableArray *_refPathWords;
}

- (void).cxx_destruct;
- (id)description;
- (id)wordAtIndex:(unsigned long long)a0;
- (id)trimmedStringStartingAtWord:(unsigned long long)a0 withPreserveFlags:(BOOL)a1;
- (void)addRefPathWord:(id)a0;
- (void)removeRefPathWordAtIndex:(unsigned long long)a0;
- (unsigned long long)numWords;
- (id)trimmedStringStartingAtWord:(unsigned long long)a0;

@end
