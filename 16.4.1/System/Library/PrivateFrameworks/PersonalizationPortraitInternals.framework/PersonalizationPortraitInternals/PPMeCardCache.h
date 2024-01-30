@class NSString;

@interface PPMeCardCache : NSObject {
    NSString *_path;
}

- (id)loadMeCardCache;
- (BOOL)deleteMeCardCache;
- (BOOL)writeMeCardCache:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
