@class NSString, NSDate;

@interface AFHomeAnnouncement : NSObject <NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long startedHostTime;
@property (readonly, nonatomic) unsigned long long finishedHostTime;
@property (readonly, copy, nonatomic) NSDate *startedDate;
@property (readonly, copy, nonatomic) NSDate *finishedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)buildDictionaryRepresentation;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 startedHostTime:(unsigned long long)a1 finishedHostTime:(unsigned long long)a2 startedDate:(id)a3 finishedDate:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
