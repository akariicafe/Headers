@class NSArray, NSString, NSURL, NSMutableArray;

@interface CMSContentFailure : NSObject <CMSCoding> {
    NSMutableArray *_attempts;
}

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSURL *redirectedURL;
@property (readonly, copy, nonatomic) NSArray *attempts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)cmsCoded;
- (void)retriedWithFailure:(unsigned long long)a0 result:(id)a1 body:(id)a2;
- (id)initWithFailure:(unsigned long long)a0 URL:(id)a1 redirectedURL:(id)a2 result:(id)a3 body:(id)a4;

@end
