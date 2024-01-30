@class NSString, NSUUID;

@interface DNDSModeRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord>

@property (readonly, copy, nonatomic) NSString *symbolImageName;
@property (readonly, copy, nonatomic) NSString *tintColorName;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *modeIdentifier;
@property (readonly, nonatomic) long long semanticType;
@property (readonly, nonatomic) unsigned long long visibility;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithDictionaryRepresentation:(id)a0 context:(id)a1;
+ (id)migrateDictionaryRepresentation:(id)a0 fromVersionNumber:(unsigned long long)a1 toVersionNumber:(unsigned long long)a2;

- (id)_initWithSymbolImageName:(id)a0 tintColorName:(id)a1 name:(id)a2 modeIdentifier:(id)a3 semanticType:(long long)a4 visibility:(unsigned long long)a5 identifier:(id)a6;
- (id)_initWithRecord:(id)a0;
- (id)dictionaryRepresentationWithContext:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
