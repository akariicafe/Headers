@class NSUUID, NSString;

@interface AFHomeAccessoryInfo : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *loggingUniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *model;
@property (readonly, copy, nonatomic) NSString *roomName;
@property (readonly, copy, nonatomic) NSString *assistantIdentifier;
@property (readonly, nonatomic) BOOL isSpeaker;
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *categoryType;
@property (readonly, nonatomic) long long schemaCategoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUniqueIdentifier:(id)a0 loggingUniqueIdentifier:(id)a1 name:(id)a2 model:(id)a3 roomName:(id)a4 assistantIdentifier:(id)a5 isSpeaker:(BOOL)a6 manufacturer:(id)a7 categoryType:(id)a8 schemaCategoryType:(long long)a9;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
