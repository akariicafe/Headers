@class NSArray, NSString;
@protocol BMBookmark;

@interface BMBookmarkNode : NSObject <BMBookmark>

@property (retain, nonatomic) NSArray *upstreams;
@property (retain, nonatomic) id<BMBookmark> value;
@property (retain, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithValue:(id)a0 upstreams:(id)a1 name:(id)a2;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionAtLevel:(long long)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
