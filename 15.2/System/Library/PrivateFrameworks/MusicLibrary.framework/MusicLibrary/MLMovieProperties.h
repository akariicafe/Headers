@class NSArray, NSString, NSMutableDictionary;

@interface MLMovieProperties : NSObject <NSCopying> {
    NSMutableDictionary *_dictionary;
}

@property (copy, nonatomic) NSArray *castMembers;
@property (copy, nonatomic) NSString *copyrightWarning;
@property (copy, nonatomic) NSArray *directors;
@property (copy, nonatomic) NSArray *producers;
@property (copy, nonatomic) NSArray *screenwriters;
@property (copy, nonatomic) NSString *studioName;

- (void)_setValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMoviePropertiesDictionary:(id)a0;
- (id)copyMoviePropertiesDictionary;
- (void)_setValueCopy:(id)a0 forKey:(id)a1;

@end
