@class NSArray;

@interface NEIKEv2ChildSAConfiguration : NSObject <NSCopying> {
    NSArray *_proposals;
}

@property unsigned long long mode;
@property unsigned int replayWindowSize;
@property BOOL sequencePerTrafficClass;
@property (retain, nonatomic) NSArray *proposals;
@property (retain) NSArray *localTrafficSelectors;
@property (retain) NSArray *remoteTrafficSelectors;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
