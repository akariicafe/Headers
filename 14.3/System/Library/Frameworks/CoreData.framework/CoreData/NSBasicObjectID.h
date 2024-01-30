@interface NSBasicObjectID : _NSCoreManagedObjectID {
    int _cd_rc;
    id _referenceData;
}

+ (char *)generatedNameSuffix;

- (id)initWithObject:(id)a0;
- (void)dealloc;
- (id)_referenceData;
- (id)_retainedURIString;

@end
