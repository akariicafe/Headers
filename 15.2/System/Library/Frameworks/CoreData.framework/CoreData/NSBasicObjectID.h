@interface NSBasicObjectID : _NSCoreManagedObjectID {
    int _cd_rc;
    id _referenceData;
}

+ (char *)generatedNameSuffix;

- (id)_retainedURIString;
- (id)initWithObject:(id)a0;
- (id)_referenceData;
- (void)dealloc;

@end
