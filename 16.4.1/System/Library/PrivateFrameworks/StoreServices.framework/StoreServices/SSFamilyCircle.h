@class NSArray, NSString;

@interface SSFamilyCircle : NSObject <SSXPCCoding>

@property (retain, nonatomic) NSArray *familyMembers;
@property (retain, nonatomic) NSArray *iTunesAccountNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)allITunesAccountNames;
- (id)allITunesIdentifiers;
- (id)initWithCacheRepresentation:(id)a0;
- (id)newCacheRepresentation;

@end
