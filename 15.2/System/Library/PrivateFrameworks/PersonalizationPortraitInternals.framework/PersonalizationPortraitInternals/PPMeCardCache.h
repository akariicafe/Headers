@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (BOOL)deleteMeCardCache;
- (id)loadMeCardCache;
- (void).cxx_destruct;
- (id)init;
- (BOOL)writeMeCardCache:(id)a0;

@end
