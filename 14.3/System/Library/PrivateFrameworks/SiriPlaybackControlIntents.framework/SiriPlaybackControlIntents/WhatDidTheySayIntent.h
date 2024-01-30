@class NSArray, NSDate, Device;

@interface WhatDidTheySayIntent : INIntent

@property (copy, nonatomic) Device *device;
@property (copy, nonatomic) NSArray *deviceContext;
@property (copy, nonatomic) NSDate *startTime;

@end
