@class NSSet;

@interface VNBlacklist : NSObject <NSCopying> {
    NSSet *_identifiers;
}

@property (readonly) unsigned long long identifierCount;
@property (readonly, copy) NSSet *allIdentifiers;

+ (id)blacklistFromUTF8StringArray:(const char **)a0;

- (id)initWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)containsIdentifier:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
