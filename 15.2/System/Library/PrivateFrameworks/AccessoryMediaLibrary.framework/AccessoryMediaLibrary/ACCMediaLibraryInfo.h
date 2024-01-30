@class NSString, ACCMediaLibraryUpdateLibraryInfo;

@interface ACCMediaLibraryInfo : NSObject {
    BOOL _state[2];
    BOOL _stateInit[2];
}

@property (readonly, nonatomic) NSString *libraryUID;
@property (readonly, nonatomic) ACCMediaLibraryUpdateLibraryInfo *info;

- (id)initWithInfo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)getState:(int)a0;
- (BOOL)setState:(int)a0 value:(BOOL)a1;

@end
