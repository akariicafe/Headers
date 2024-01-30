@class NSString, NSObject;
@protocol VUIMediaEntityIdentifier;

@interface VUILibrarySeasonViewModel : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<VUIMediaEntityIdentifier> *seasonIdentifier;
@property (readonly, nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithSeasonIdentifier:(id)a0 type:(unsigned long long)a1;

@end
