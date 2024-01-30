@class NSString, INPerson, NSNumber, INDateComponentsRange;

@interface INFileProperty : NSObject <INFilePropertyExport, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *qualifier;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateComponentsRange;
@property (readonly, copy, nonatomic) INPerson *person;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSNumber *quantity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 qualifier:(id)a1 type:(id)a2 dateComponentsRange:(id)a3 person:(id)a4 value:(id)a5 quantity:(id)a6;

@end
