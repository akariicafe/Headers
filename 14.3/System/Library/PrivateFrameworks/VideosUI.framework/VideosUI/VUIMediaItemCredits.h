@class NSOrderedSet;

@interface VUIMediaItemCredits : NSObject <NSCopying>

@property (copy, nonatomic) NSOrderedSet *cast;
@property (copy, nonatomic) NSOrderedSet *directors;
@property (copy, nonatomic) NSOrderedSet *producers;
@property (copy, nonatomic) NSOrderedSet *screenwriters;
@property (readonly, nonatomic) BOOL hasCredits;

+ (id)_arrayFromStringRepresentation:(id)a0;
+ (id)_stringRepresentationFromArray:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stringRepresentation;
- (unsigned long long)hash;
- (id)initWithStringRepresentation:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
