@class NSString, WBSHistoryItem, WBSHistoryVisit;

@interface WBSHistoryVisitIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, nonatomic) double visitTime;
@property (retain, nonatomic) WBSHistoryItem *associatedHistoryItem;
@property (retain, nonatomic) WBSHistoryVisit *associatedHistoryVisit;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithURLString:(id)a0 visitTime:(double)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
