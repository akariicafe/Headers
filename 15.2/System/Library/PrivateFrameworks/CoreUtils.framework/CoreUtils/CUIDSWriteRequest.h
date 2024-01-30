@class NSData;

@interface CUIDSWriteRequest : NSObject {
    const char *writeBase;
    const char *writePtr;
    const char *writeEnd;
    CUIDSWriteRequest *next;
}

@property (retain, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ completion;

- (void).cxx_destruct;

@end
