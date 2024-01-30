@class NSDictionary;

@interface NTKGalleonHeadingGenerator : NSObject {
    NSDictionary *_lookup;
}

+ (id)sharedGenerator;
+ (id)_compassDirectionForHeading:(unsigned long long)a0;
+ (id)_generateHeadingStrings;

- (id)_init;
- (void).cxx_destruct;
- (id)stringForHeading:(unsigned long long)a0;

@end
