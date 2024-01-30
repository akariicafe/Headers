@class NSString;

@interface Coherence.ObjCRLE : NSObject {
    void /* unknown type, empty encoding */ rle;
}

@property (nonatomic, readonly) long long rangeCount;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (void)enumerateRangesIn:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 :(id /* block */)a1;
- (void)addMappingFrom:(long long)a0 to:(long long)a1;

@end
