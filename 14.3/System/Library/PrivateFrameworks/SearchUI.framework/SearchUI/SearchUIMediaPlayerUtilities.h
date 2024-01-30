@interface SearchUIMediaPlayerUtilities : NSObject

+ (id)filterPropertyForMPMediaEntityType:(long long)a0;
+ (long long)MPMediaEntityTypeForSFMediaEntityType:(int)a0;
+ (void)fetchVideoPunchoutForActionItem:(id)a0 completion:(id /* block */)a1;
+ (long long)MPMediaGroupingForMPMediaEntityType:(long long)a0;

@end
