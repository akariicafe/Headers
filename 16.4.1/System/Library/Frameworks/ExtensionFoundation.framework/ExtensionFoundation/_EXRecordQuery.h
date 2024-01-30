@class NSPredicate, LSExtensionPointRecord;

@interface _EXRecordQuery : _EXQuery {
    NSPredicate *_predicate;
    struct { unsigned int val[8]; } _hostAuditToken;
}

@property (retain) LSExtensionPointRecord *record;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)extensionPointIdentifier;
- (id)initWithCoder:(id)a0;
- (void)setPredicate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)platform;
- (id)initWithExtensionPoint:(id)a0;
- (void)setHostAuditToken:(struct { unsigned int x0[8]; })a0;
- (BOOL)matchesRecord:(id)a0;
- (struct { unsigned int x0[8]; })hostAuditToken;
- (id)extensionPointRecords;
- (void).cxx_destruct;
- (id)predicate;

@end
