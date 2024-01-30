@class NSString;

@interface _PASArgOption : NSObject {
    int _longOptionFlag;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *helpDescription;
@property (readonly, copy, nonatomic) NSString *argMetavar;
@property (readonly, nonatomic) BOOL required;

+ (id)optionWithName:(id)a0 shortName:(id)a1 help:(id)a2;
+ (id)optionWithName:(id)a0 shortName:(id)a1 argMetavar:(id)a2 help:(id)a3;
+ (id)optionWithName:(id)a0 shortName:(id)a1 argMetavar:(id)a2 help:(id)a3 required:(BOOL)a4;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0 shortName:(id)a1 argMetavar:(id)a2 help:(id)a3 required:(BOOL)a4;

@end
