@class NSString;

@interface INPersonHandle : NSObject <INPersonHandleExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long emergencyType;
@property (readonly, nonatomic, getter=isSuggested) BOOL suggested;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithValue:(id)a0 type:(long long)a1 label:(id)a2;
- (id)initWithValue:(id)a0 type:(long long)a1 label:(id)a2 emergencyType:(long long)a3;
- (id)initWithValue:(id)a0 type:(long long)a1 label:(id)a2 suggested:(BOOL)a3;
- (id)initWithValue:(id)a0 type:(long long)a1 label:(id)a2 emergencyType:(long long)a3 suggested:(BOOL)a4;
- (BOOL)isEqual:(id)a0;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithValue:(id)a0 type:(long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;

@end
