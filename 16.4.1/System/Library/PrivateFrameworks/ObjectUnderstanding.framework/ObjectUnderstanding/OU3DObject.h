@class NSString, NSUUID, NSArray, NSMutableDictionary, NSMutableArray;

@interface OU3DObject : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *type;
@property (retain, nonatomic) NSUUID *identifier;
@property (nonatomic) float confidence;
@property (retain, nonatomic) NSArray *logits;
@property (retain, nonatomic) NSArray *corners_status;
@property (retain, nonatomic) NSArray *edges_status;
@property (retain) NSArray *faces_status;
@property (retain) NSMutableArray *corners_history;
@property (retain) NSMutableArray *refined_box_history;
@property (nonatomic) BOOL status;
@property (nonatomic) void /* unknown type, empty encoding */ color;
@property (retain) NSString *detection_source;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ dimensions;
@property (readonly, nonatomic) struct { void /* unknown type, empty encoding */ x0[4]; } transform;
@property (readonly, nonatomic) NSMutableDictionary *groups;
@property (readonly, nonatomic) NSMutableDictionary *boxesDict;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)getDimension:(id)a0 dim:(void *)a1;
- (BOOL)getTransform:(id)a0 transform:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a1;
- (BOOL)runIsValidType:(id)a0;
- (void)clearGroupInfo:(id)a0;
- (void)addBoxesDict:(const struct box3d { void /* unknown type, empty encoding */ x0[8]; } *)a0 forDictKey:(id)a1;
- (void)addGroupId:(int)a0 forGroupType:(id)a1;
- (void)addRefinedBoxToHistory:(id)a0;
- (int)getFrameIndexOfLastRefine;
- (BOOL)hasBoxesDict:(id)a0;
- (void)removeBoxesDict:(id)a0;

@end
