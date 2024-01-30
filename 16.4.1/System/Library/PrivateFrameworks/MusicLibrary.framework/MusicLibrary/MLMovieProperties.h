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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setValue:(id)a0 forKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_setValueCopy:(id)a0 forKey:(id)a1;
- (id)copyMoviePropertiesDictionary;
- (id)initWithMoviePropertiesDictionary:(id)a0;

@end
