@class NSSet;

@interface VNBlacklist : NSObject <NSCopying> {
    NSSet *_identifiers;
}

@property (readonly) unsigned long long identifierCount;
@property (readonly, copy) NSSet *allIdentifiers;

+ (id)blacklistFromUTF8StringArray:(const char **)a0;

- (id)initWithIdentifiers:(id)a0;
- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
