@class NSArray;

@interface FPImageEnumerator : NSObject {
    NSArray *_images;
    unsigned long long _index;
}

- (id)initWithImages:(id)a0;
- (void).cxx_destruct;
- (id)nextImageForStart:(unsigned long long)a0 end:(unsigned long long)a1;

@end
