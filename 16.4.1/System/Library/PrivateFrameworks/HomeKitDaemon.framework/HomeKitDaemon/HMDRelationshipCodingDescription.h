@class NSRelationshipDescription;

@interface HMDRelationshipCodingDescription : HMDPropertyCodingDescription {
    BOOL _parentChild;
}

@property (readonly) NSRelationshipDescription *relationship;
@property (readonly, getter=isParentChild) BOOL parentChild;
@property (readonly, getter=isReference) BOOL reference;

@end
