@class NSOrderedSet;

@interface VUIMediaItemCredits : NSObject <NSCopying>

@property (copy, nonatomic) NSOrderedSet *cast;
@property (copy, nonatomic) NSOrderedSet *directors;
@property (copy, nonatomic) NSOrderedSet *producers;
@property (copy, nonatomic) NSOrderedSet *screenwriters;
@property (readonly, nonatomic) BOOL hasCredits;

+ (id)_arrayFromStringRepresentation:(id)a0;
+ (id)_stringRepresentationFromArray:(id)a0;

- (id)initWithStringRepresentation:(id)a0;
- (id)stringRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
