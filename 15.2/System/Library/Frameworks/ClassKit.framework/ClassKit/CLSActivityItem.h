@class NSString;

@interface CLSActivityItem : CLSObject <CLSRelationable> {
    NSString *_title;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)a0 title:(id)a1;
- (BOOL)validateObject:(id *)a0;

@end
