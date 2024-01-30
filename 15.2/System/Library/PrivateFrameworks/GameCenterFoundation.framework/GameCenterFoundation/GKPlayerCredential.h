@class NSString, NSDate, GKPlayerInternal;

@interface GKPlayerCredential : GKInternalRepresentation

@property (retain) NSString *accountName;
@property (retain) NSString *authenticationToken;
@property (retain) NSString *altDSID;
@property (retain) NSString *DSID;
@property (retain) NSString *rawPassword;
@property (retain) GKPlayerInternal *playerInternal;
@property long long environment;
@property unsigned int scope;
@property (readonly) NSString *scopeAsString;
@property (retain) NSDate *scopeModificationDate;

+ (id)secureCodedPropertyKeys;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
