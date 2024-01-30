@class GSAddition;

@interface QLThumbnailCachedAddition : NSObject {
    unsigned long long _fileID;
}

@property (retain) GSAddition *addition;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithAddition:(id)a0;
- (BOOL)isStillValid;

@end
