@class DTOSLogStackReferenceWrapper;

@interface DTOSLogArgumentConstReferences : NSObject {
    DTOSLogStackReferenceWrapper *etype;
    DTOSLogStackReferenceWrapper *stringVal;
    DTOSLogStackReferenceWrapper *prefix;
    DTOSLogStackReferenceWrapper *name;
    DTOSLogStackReferenceWrapper *tmpArgStruct;
}

- (void).cxx_destruct;

@end
