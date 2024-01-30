@class NSString, NSArray, NSDictionary;

@interface MSVCLICommand : NSObject {
    NSDictionary *_cachedOptionsDictionary;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *options;
@property (readonly, nonatomic) NSDictionary *optionsDictionary;

- (id)initWithName:(id)a0 options:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)containsOption:(id)a0;
- (id)valueForOption:(id)a0;

@end
